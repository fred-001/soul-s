#include <studio,h>

int calcolateFine(int daysOverdue){
    if (daysOverdue <=7)
       return 20;
     else if (daysOverdue<=14)
       return 50;
     else
       return 100;  
}

int main() {
    int bookID, dueDate, returnDate, daysOverdue, fineRate, fineAmount;

    printf("Enter the book ID, due date, and return date: ");
    scanf("%d,%d,%d", &bookID,&dueDate,&returnDate)

    if (returnDate > dueDate){
      daysOverdue = returnDate - dueDate;
    } else{
      daysOverdue = 0;
    }
    
    fineRate = calculateFine(daysOverdue);
    fineAmount = daysOverdue *fineRate;

    printf("\nBookID: %d", bookID);
    printf("\nDue date: %d", dueDate);
    printf("\nReturn Date: %d",returnDate);
    printf("\nDays overdue: %d", daysOerdue);
    printf("\nFine rate: %d ksh", fineRate);
    printf("\nFine amount: %d ksh", fineAmount);

    return 0;
}