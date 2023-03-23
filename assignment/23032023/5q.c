// 5. Predict the output or error(s) for the following program:
main()
{
    int c[ ]={2.8,3.4,4,6.7,5};
    int j,*p=c,*q=c;
    for(j=0;j<5;j++)
        {printf(" %d ",*c);
        ++q;}
    printf("\n");
    for(j=0;j<5;j++)
        {printf(" %d ",*p);
        ++p; }
}

/*the output for the given program is 
        2  2  2  2  2 
        2  3  4  6  5  */
        