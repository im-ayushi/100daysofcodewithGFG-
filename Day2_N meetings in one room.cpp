class Solution
{
    public:
  
    
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, int>>slot;
       
       for(int i = 0; i < n; i++)
       {
           slot.push_back(make_pair(end[i],start[i]));
       }
       
       sort(slot.begin(), slot.end());
   
        int prev_end = slot[0].first;
        int count = 1;
        for(int i = 1; i < n; i++)
        {
         if(prev_end < slot[i].second)
         {
           count++;
           prev_end = slot[i].first;
       }
    }
    return count;
    }
};
