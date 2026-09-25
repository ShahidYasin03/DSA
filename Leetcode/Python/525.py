class Codec:
    def __init__(self):
        self.mp = {}
        self.counter = 0

    def to_base62(self, num: int) -> str:
        chars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

        if num == 0:
            return chars[0]

        result = []

        while num > 0:
            result.append(chars[num % 62])
            num //= 62

        return "".join(reversed(result))

    def encode(self, longUrl: str) -> str:
        self.counter += 1

        key = self.to_base62(self.counter)
        self.mp[key] = longUrl

        return f"http://tinyurl.com/{key}"

    def decode(self, shortUrl: str) -> str:
        key = shortUrl.split("/")[-1]
        return self.mp[key]