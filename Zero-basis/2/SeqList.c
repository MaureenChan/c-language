void SeqListInit(SeqListType *SL)
{
    SL->ListLen = 0;
}

int SeqListLength(SeqListType *SL)
{
    return (SL->ListLen);
}

int SeqListAdd(SeqListType *SL, DATA data)
{
    if (SL->ListLen >= MAXSIZE)
    {
	printf("Full. Can't add anymore\n");
	return 0;
    }

    SL->ListData[++SL->ListLen] = data;
    return 1;
}

int SeqListInsert(SeqListType *SL, int n, DATA data)
{
    int i;
    if (SL->ListLen >= MAXSIZE)
    {
	printf("Full.Can't insert a point!\n");
	return 0;
    }

    if (n < 1 || n > SL->ListLen - 1)
    {
	printf("Wrong number.Can't insert a member\n");
	return 0;
    }

    for ( i = SL->ListLen; i >= n; i--)
	SL->ListData[i + 1] = SL->ListData[i];
    SL->ListData[n] = data;
    SL->ListLen++;
    return 1;
}

int SeqListDelete(SeqListType *SL, int n)
{
    int i;
    if ( n < 1 || n > SL->ListLen + 1)
    {
	printf("Error.Can't not delete the point!\n");
	return 0;
    }

    for ( i = n; i < SL->ListLen; i++)
	SL->ListData[i] = SL->ListData[i + 1];
    SL->ListLen--;
    return 1;
}

DATA *SeqListFindByNum(SeqListType *SL, int n)
{
    if (n < 1 || n > SL->ListLen + 1)
    {
	printf("Error! can't return the point!\n");
	return NULL;
    }
    return &(SL->ListData[n]);
}

int SeqListFindByCont(SeqListType *SL, char *key)
{
    int i;
    for (i = 1; i <= SL->ListLen; i++)
	if(strcmp(SL->ListData[i].key, key) == 0)
	    return i;
    return 0;
}
