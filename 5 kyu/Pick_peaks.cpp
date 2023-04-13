// https://www.codewars.com/kata/5279f6fe5ab7f447890006a7
#include <vector>

// This struct does exists on test codewars
struct PeakData {
    std::vector<int> pos, peaks;
};

PeakData pick_peaks(const std::vector<int> &v) {
    PeakData result;
    if ((int)v.empty())
        return result;
    int current_pos = -1;
    int current_peak;
    for (int i = 1;i<(int)v.size();i++){
        if (v[i-1] < v[i]) {
            current_pos = i;
            current_peak = v[i];
        } else if (v[i-1] > v[i] && current_pos != -1) {
            result.pos.push_back(current_pos);
            result.peaks.push_back(current_peak);
            current_pos = -1;
        }
    }
    return result;
}