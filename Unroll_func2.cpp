int function2 (int* a, int n) 
{
    int result = 0;
    int i = 0;
    
    for (; i < n - 1; i += 2) 
    {
        result += a[i] * 2;
        
        result -= (a[i + 1] + 2);
    }

    if (i < n) 
    {
        if (i % 2 == 0)
            result += a[i] * 2;
        else
            result -= a[i] + 2;
    }
    
    return result;
}