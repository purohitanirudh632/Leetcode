class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        
        int alx1,alx2,bly1,bly2;
        
        int len1, len2;
        int width1,width2;
        
        len1 = abs(ax2-ax1);
        len2 = abs(bx2-bx1);
        width1 = abs(ay2-ay1);
        width2 = abs(by2 -by1);
        
        
        if(bx1<ax1 && bx2<ax1 || bx1>ax2 || by1>ay2 || by2 < ay1)
        {
            return (len1*width1)+(len2*width2);
        }
        
             
        

        alx1 = bx1>ax1?bx1:ax1;
        alx2 = bx2<ax2?bx2:ax2;
        bly1 = by1>ay1?by1:ay1;
        bly2 = by2<ay2?by2:ay2;
        
        
        int shadelen = abs(alx2-alx1);
        int shadewidth = abs(bly2-bly1);
        
        
        return (len1*width1)+(len2*width2)- (shadelen* shadewidth);
    }
};