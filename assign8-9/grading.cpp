
        vector<int> rounded;
        for(int i=0;i<grades.size();i++){
            if(grades[i]<38){
                int num =grades[i];
                rounded.push_back(num);
                continue;
            }else {
            int rem = grades[i] % 5;
                if (5 - rem < 3)
                    grades[i] += 5 - rem;
                    rounded.push_back(grades[i]);
            }
        }
        return rounded;