/* 磅和英石转换 */
#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
    private:
        enum {Lbs_per_stn = 14};
        int stone;
        double pds_left;
        double pounds;
    
    public:
        Stonewt(double lbs);
        Stonewt(int stnm, double lbs);  // 英石， 磅
        Stonewt();
        ~Stonewt();
        void show_lbs() const;
        void show_stn() const;
};

#endif