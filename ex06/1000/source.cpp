/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/10/2013 12:33:02 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

class Item {
    public:
        Item() {
            counts++;            
        }

        ~Item() {
            counts--;            
        }

        static int getCounts() {
            return counts;
        }

    private:
        static int counts;
};

int Item::counts = 0;
