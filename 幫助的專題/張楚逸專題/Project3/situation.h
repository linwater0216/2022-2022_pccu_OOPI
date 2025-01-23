#ifndef SITUATION_h
#define SITUATION_h

class situation {
    private:
        int income;//收入
        int outpay;//花錢
    public:
        void setincome(int a);
        void setoutpay(int a);
        int getbalance();
        int getincome();
        int getoutpay();
};

#endif // !situation_h