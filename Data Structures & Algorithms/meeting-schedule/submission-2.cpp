/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), [](Interval& x, Interval& y) {
            return x.start < y.start;
        });
        for(int i = 1; i < n; i++) {
            int x1 = intervals[i - 1].end;
            int x2 = intervals[i].start;
            if(x1 > x2)
                return false;
        }

        return true;
    }
};
