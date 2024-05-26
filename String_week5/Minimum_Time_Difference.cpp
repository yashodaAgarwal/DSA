int findMinDifference(vector<string> &timePoints)
{
    vector<int> minutes;
    for (int i = 0; i < timePoints.size(); i++)
    {
        int hour = stoi(timePoints[i].substr(0, 2));
        int min = stoi(timePoints[i].substr(3, 2));
        int minute = (hour * 60) + min;
        minutes.push_back(minute);
    }

    sort(minutes.begin(), minutes.end());

    int mini = INT_MAX;

    for (int i = 0; i < minutes.size() - 1; i++)
    {
        int dif = minutes[i + 1] - minutes[i];
        mini = min(mini, dif);
    }

    mini = min(mini, ((minutes[0] + 1440) - minutes[minutes.size() - 1]));
    return mini;
}