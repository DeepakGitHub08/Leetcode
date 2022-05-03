
string s1 = "my name is rohit";
strings2 = "Your name is deepak";

unordered_map<string ,int>myMap;

vector<string> fun(string s){
    vector<string>ans;
    string currWord = "";
    for(int i =0;i < s.length();i++){
        if(s[i] != " "){
            currword += s[i];
        }
        else{
            ans.push_back(currWord);
        }
    }
    return ans;
}
vector<string>matched;
vector<string>Unmatched;


vector<string>arrayS1 = fun(s1);
vector<string>arrayS2 = fun(s2);

for(int i = 0;i < arrayS1.size();i++){
    MyMap[arrayS1[i]] =1;
}

for(int i = 0;i < arrayS2.size();i++){
   if(Mymap[arrayS2[i]]){
       matched.push_back(arrayS2[i])
   }
   else{
       Unmatched.push_back(arrayS2[i]);
   }
}

7,1,4,6,3,2,1,9,4,11
                        7 -> <1,
                        8 -> <2,
                        12-> <3,
                        18-> <4
                        21 -> 5
                        23 -> 6
                        24 -> 7
                        33  - 8
                        37 - 9
                        48 - 10
