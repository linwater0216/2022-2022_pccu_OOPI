#ifndef SITUATION_h
#define SITUATION_h

class situation {
    private:
        int income;//���J
        int outpay;//���
    public:
        void setincome(int a);
        void setoutpay(int a);
        int getbalance();
        int getincome();
        int getoutpay();
};

#endif // !situation_h