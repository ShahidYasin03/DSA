#include <iostream>
#include <vector>
using namespace std;

#include <vector>

class MyCalendar {
public:
    std::vector<std::pair<int, int>> bookings;  // To store start and end times

    MyCalendar() {}

    bool book(int start, int end) {
        for (const auto& booking : bookings) {
            if (start < booking.second && end > booking.first) {
                return false; // There is an overlap
            }
        }
        bookings.push_back({start, end}); // No overlap, add the booking
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */


int main()
{
    cout << "Hello, word!" << endl;
    return 0;
}