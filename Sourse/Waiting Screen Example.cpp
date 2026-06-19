#include <iostream>
#include "clsQueueLine.h"

using namespace std;

int main()
{

    clsQueueLine PayBillsQueue("A0", 10); //Prefix ,AverageServeTime
    clsQueueLine SubscriptionsQueue("B0", 5);


    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();

    cout << "\nPay Bills Queue Info:\n";
    PayBillsQueue.PrintInfo();

    PayBillsQueue.PrintTicketsLineRTL();
    PayBillsQueue.PrintTicketsLineLTR();



    PayBillsQueue.PrintAllTickets();

    PayBillsQueue.ServeNextClient();
    cout << "\nPay Bills Queue After Serving One client\n";
    PayBillsQueue.PrintInfo();

    cout << "\nSubscriptions Queue Info:\n";

    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();


    SubscriptionsQueue.PrintInfo();

    SubscriptionsQueue.PrintTicketsLineRTL();
    SubscriptionsQueue.PrintTicketsLineLTR();

    SubscriptionsQueue.PrintAllTickets();

    SubscriptionsQueue.ServeNextClient();
    cout << "\nSubscriptions Queue After Serving One client\n";
    SubscriptionsQueue.PrintInfo();
    
    
    clsQueueLine VIPQueue("V0", 5);

    VIPQueue.IssueTicket();
    VIPQueue.IssueTicket();
    VIPQueue.IssueTicket();
    VIPQueue.IssueTicket();
    VIPQueue.IssueTicket();

    cout << "\nVIP Queue Info:\n";
    VIPQueue.PrintInfo();

    VIPQueue.PrintTicketsLineRTL();
    VIPQueue.PrintTicketsLineLTR();



    VIPQueue.PrintAllTickets();

    VIPQueue.ServeNextClient();
    cout << "\nVIP Queue After Serving One client\n";
    VIPQueue.PrintInfo();


    return 0;
}

