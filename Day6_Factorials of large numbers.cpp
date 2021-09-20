class Solution {
public:
    vector<int> factorial(int N){
        // code here
       vector<int> ress;
        ress.push_back(1);
        for(int x=2;x<=N;x++)
        {
            int carry=0;
            for(int i=0;i<ress.size();i++)
            {
                int prod=ress[i]*x+carry;
                ress[i]=prod%10;
                carry=prod/10;
            }
            while(carry!=0){
                ress.push_back(carry%10);
                carry/=10;
            }
        }
        reverse(ress.begin(),ress.end());
        return ress;
    }
};
