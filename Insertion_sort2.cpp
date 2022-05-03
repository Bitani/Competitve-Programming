void insertionSort2(int n, vector<int> aray) {
 n = aray.size();
    for(int i=1;i<n;i++)
    {
        int curr = aray[i];
        for(int j=i-1;j>=0;j--)
        {
            if(aray[j]>curr)
            {
                aray[j+1]=aray[j];
                if(j==0)
                {
                    aray[j]=curr;
                }
                
            }
            else{
                aray[j+1]=curr;
                j=-1;
            }
        }
        for(int t=0;t<n;t++)
            cout<<aray[t]<<" ";
        cout<<endl;
    }
}
