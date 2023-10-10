class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        d={}
        s="abcdefghijklmnopqrstuvwxyz"
        res={}
        k=97
        for i in s:
            d[i]=0
        for i in key:
            if(i==' '):
                continue
            if d[i]<=0:
                d[i]+=1
                # print(chr(k))
                res[i]=chr(k)
                k+=1
        result=''
        print(res)
        for i in message:
            if(i==' '):
                result+=' '
            else:
                if i in res:
                    result+=res[i]
        return result

