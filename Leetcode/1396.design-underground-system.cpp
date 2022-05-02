/*
 * @lc app=leetcode id=1396 lang=cpp
 *
 * [1396] Design Underground System
 */

class UndergroundSystem {
unordered_map <pair <sttring, string >, pair<double, double>>AvgMap;
    unordered_map<int , pair<string , int>> cm;
    
public:
    UndergroundSystem() {
        return;
    }
    
    void checkIn(int id, string stationName, int t) {
        cm[id] =  {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        string startStation = cm[id].first;
        int timeTaken = t- cm[id].second;
        pair<double, int> mp = {startStation, stationName};
        if(AvgMap.find(mp) == AvgMap.end()){
            AvgMap[mp] = {double(timeTaken), 1.0};
        }
        else{
            auto mp2 = AvgMap[mp];
            mp2.first  = ((mp2.first * mp2.second) + (timeTaken))/(mp2.second + 1);
            mp2.second = mp2.second + 1.0;
            AvgMap[mp] = mp2;

        }
        cm.erase(id);
    }
    
    double getAverageTime(string startStation, string endStation) {
        return AvgMap[{startStation, endStation}].first;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
// @lc code=end

