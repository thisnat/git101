#include <iostream>
#include (sstream>
#include (cmath>
#include (string>
#include <iomanip>
using namespace std;
class Time{
    public:
        Time (int hour, int minute, int second) {
            this-hour = hour;
            this-minute = minute;
            this-second = second;
        }
        Time (int duration){ 
            this->hour = duration / 3600;
            this->minute = (duration % 3600) / 60;
            this->second = (duration % 3600) % 60;
        }
        int getHour () {
            return hour;
        }
        int getMinute() {
            return minute;
        }
        int getSecond () {
            return second;
        }
        int getDuration () const {
            int this_time = 0;
            this_time += this->hour * 60 * 60;
            this_time += this->minute * 60;
            this_time += this->second;
            return this_time;
        }
        Time add (Time cther) const {
            Time added_time (hour, minute, second) ;

            if (added_time.second + other.second >= 60) {
                while (added_time.second + other.second >= 60) {
                    added_time.second = ((added_time.second + other.second) - 60);
                    other. second -= 60;
                    added_time.minute += 1;
                }
        }else{
        added_time.second += other. second;
        }
        if (added_time.minute + other.minute >= 60) {
            while (added_time.minute + other.minute >= 60) {
            added_time.minute = ((added_time.minute + other.minute) - 60) ;
            other.minute -= 60;
            added_time.hour += 1;
        }else{
        added time.minute += other.minute;
        }
        added time.hour += other.hour;
        if (added_time.hour >= 24) {
            added_time.hour -= 24;
        }
        return added time;
    }
    int subtract (Time other) const {
        int this_time = 0, other_time = 0;
        this_time += this->hour * 60 * 60;
        this_time += this->minute * 60;
        this_time += this->second;

        other_time += other.hour * 60 * 60;
        other_time += other.minute * 60;
        other time += other.second;

        if (this_time >= other time) {
            return abs (this_time - other_time);
        } else {I
        return 86400 - abs(this_time - other_time);
        }
    }
        int equals(Time other) const {
            if (hour == other.hour && minute == other.minute && second == other.second) {
                return 1;
            } else {
                return 0;
            }
        }
        string tostring() const {
            int this_time = O, hours, minutes, seconds;
            this_time += this->hour * 60 * 60;
            this_time += this->minute * 60;
            this_time += this->second;
            
            hours = this_time / 3600;
            minutes = (this_time : 3600) / 60;
            seconds = (this_time : 3600) % 60;
            
            string hour,mintue,seconds;
            if (hours < 10) {
                hour = to_string(hours);
            }else {
                hour = to_string(hours);
            }
            if (minutes < 10){
                minute = to_string(minutes);
            }else {
                minute = to_string(minutes);
            }
            if (second < 10) {
                second = to_string(seconds);
            }else {
                second = to_string(seconds);
            }
            return hour+ ":" + minute + ":" + second;
        }

    private:
        int hour, minute,second,duration;
};
           