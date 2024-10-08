class Solution {
public:
    vector<int> partitionLabels(string str) {
        vector<int> partitions;

        for (int i = 0; i < str.length(); ) {

            int startIndex = i;
            int endIndex = str.find_last_of(str[startIndex]);

            for (int s = startIndex + 1; s <= endIndex - 1; s++) {

                int lastIndexOfNextChar = str.find_last_of(str[s]);

                if (lastIndexOfNextChar > endIndex) {
                    endIndex = lastIndexOfNextChar;
                }
            }

            partitions.push_back(endIndex - startIndex + 1);
            i = endIndex + 1;
        }

        return partitions;
    }

};