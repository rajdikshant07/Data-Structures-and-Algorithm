int countDistinctArtifacts(vector<int>& ids) {
    set<int> s(ids.begin(),ids.end());
    return s.size();
}