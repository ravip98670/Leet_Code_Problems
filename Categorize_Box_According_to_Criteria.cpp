class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long vol1=long(long(length)*long(width)*long(height));
        if(((length>=10000) || (width>=10000) || (height>=10000) || (vol1>=1000000000) ) && mass >= 100)
            return "Both";
        else if((length>=10000) || (width>=10000) || (height>=10000) || (vol1>=1000000000))
            return "Bulky";
        else if(mass >= 100)
            return "Heavy";
        else 
            return "Neither";
    }
};