class CellPhone{
    int profit = 700;
    int nettoPrice;
public:
    static double vat;
    CellPhone();
    CellPhone(int);
    void set_nettoPrice(int);
    int get_profit();
    int get_nettoPrice();
    double get_vat();
    double price_brutto();
};