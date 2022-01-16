void solve(double meal_cost, int tip_percent, int tax_percent) {
                double a,b,d;
                a= (meal_cost * tip_percent)/100;
                b= (meal_cost * tax_percent)/100;
                d = meal_cost+a+b;
                cout<<round(d); /* round used for round figure point value
}