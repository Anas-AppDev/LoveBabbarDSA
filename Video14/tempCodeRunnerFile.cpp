
int binsearch(int elem){

    int s = 0;
    int e = elem-1;

    int ans = -1;

    while (s<=e){

        int mid =  s + ((e-s)/2);

        // if (mid*mid==elem){
        //     ans=mid;
        // }
        if ((mid*mid)<=elem){
            s = mid+1;
            ans=mid;
        }
        else {
            e = mid-1;
        }
    }

    return ans;

}

