 /*choose an appropriate option
 1. Add items
 2. Display total bill
 3. Remove item price
 4. Display all items
 5. Total Items
 6. Quit

 prodno :
 price :
    */


    #include<iostream>
    using namespace std;

    class shop
    {
       int itemno[5],price[5],count=0;
       public:void items()
       {
           if(count<5){
           cout<<"Enter itemno\n";
           cin>>itemno[count];
           cout<<"Enter price\n";
           cin>>price[count];
           count++;}
       }
       void bill()
       {
        int total=0;
        for(int i=0;i<count;i++)
        {
            total=total+price[i];
        }
        cout<<"Total Bill="<<total<<"\n";
       }
       void rm()
       {
        if(count>0)
        {
            count--;
            cout<<"Item Removed\n";
        }
       }
       void allitems()
       {
    //for(int i=0;i<count;i++)
    //{
        cout<<"All items"<<itemno[count]<<"All price"<<price[count];
    // }
       }
       void totalitems()
       {
           count=0;
       }
    };
    int main()
    {
        int choice;
        shop s;
        s.items();
        /*s.bill();
        s.rm();
        s.allitems();
        s.totalitems();*/

        do
        {
            cout<<"Choose Appropriate Option\n";
            cout<<"1 For Add Items\n";
            cout<<"2 For Display Bill\n";
            cout<<"3 For Remove Item\n";
            cout<<"4 Display All Item\n";
            cout<<"5 For Total Items\n";
            cout<<"6 For Quit\n";
            cin>>choice;
            switch(choice)
            {
            case 1:
                {
                    s.items();
                    break;
                }
            case 2:
                {
                    s.bill();
                    break;
                }
            case 3:
                {
                    s.rm();
                    break;
                }
            case 4:
                {
                s.allitems();
                break;
                }
            case 5:
                {
                    s.totalitems();
                    break;
                }
            case 6:
                {
                    cout<<"Exit";
                    break;
                }
            }
        }
        while(choice!=6);
    }
