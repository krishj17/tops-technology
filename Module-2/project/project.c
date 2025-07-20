#include<stdio.h>
#include<string.h>
struct menu { // menu set details.
    int id;
    char name[15];
    int price;
};
struct usercart{ // user select details.
    int id;
    char name[15];
    int price;
    int qty;
    int amt;
    int finalamt;
};
void menuitems(int items, struct menu m[items]);
void getchoice(int items, struct menu m[items], struct usercart *userselect);
void main(){
    int items=5; // total items in menu.
    struct menu m[items]; // menu object
    struct usercart userselect; // user select object.
    userselect.finalamt=0; // initial total value.
    menuitems(items,m); // set menu details.

    // Printing the menu:
    for(int i=0; i<items; i++){
        printf("%d. %s \t Price=%drs/pcs\n",m[i].id, m[i].name, m[i].price);
    }

    // Get User Choice:
    getchoice(items,m,&userselect);
    
    printf("\nTotal Amount: %d",userselect.finalamt);
}


// User select function:
void getchoice(int items, struct menu m[items], struct usercart *userselect){
    int choice; 
    printf("Please enter your choice: ");
    scanf("%d",&choice);
    if(choice>items){
        printf("Invalid Choice!");

    }
    for(int i=0; i<items; i++){
        if(i+1==choice){ // set id, name & price.
            userselect->id=m[i].id;  
            strcpy(userselect->name,m[i].name);
            userselect->price=m[i].price;
        }   
    }

    // Enter quantity
    printf("Enter the Quantity: ");
    scanf("%d",&userselect->qty);

    // Calc Amount:
    userselect->amt = userselect->price * userselect->qty; // Transection Amount.
    userselect->finalamt = userselect->finalamt + userselect->amt; // Final total amount.
    printf("\nOrder->> Item:%s -- Quantity:%d -- Amount:%d",userselect->name, userselect->qty, userselect->amt);

    // more order: 
    char placemore;
    printf("\nDo you want to place more? (y/n): ");
    scanf(" %c", &placemore);

    if(placemore=='y'){
        getchoice(items,m,userselect);
    }
    else{
        printf("\nCheckout Success!!");   
    }
}


// Menu function: 
void menuitems(int items, struct menu m[items]){
    m[0].id=1;
    strcpy(m[0].name,"Pizza");
    m[0].price=100;

    m[1].id=2;
    strcpy(m[1].name,"Burger");
    m[1].price=60;

    m[2].id=3;
    strcpy(m[2].name,"Coffee");
    m[2].price=70;

    m[3].id=4;
    strcpy(m[3].name,"Vada-Pav");
    m[3].price=40;

    m[4].id=5;
    strcpy(m[4].name,"Sandwitch");
    m[4].price=35;
}