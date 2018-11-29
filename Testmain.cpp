///*how to read a picture in from a file
//and print it to the screen*/
//#include <iostream>
//#include <fstream>
//
//#include "SDL_Plotter.h"
//
//using namespace std;
//const int ROW = 300;
//const int COL = 400;
//
//struct pixel{
//int r;
//int g;
//int b;
//};
//int main(int argc, char ** argv)
//{
//    SDL_Plotter g(1000, 1000);
//    int x=0,y=0, xd, yd;
//
//    ifstream inFile;
//    inFile.open("drboothgif.txt");
//    pixel pic[ROW][COL];
//    for (int i =0; i < ROW-1; i++)
//    {
//        for(int k =0; k < COL-1; k++)
//        {
//            inFile>>pic[i][k].r;
//            inFile>>pic[i][k].g;
//            inFile>>pic[i][k].b;
//        }
//    }
//    while (!g.getQuit())
//    {
//			for(xd = 0; xd < ROW; xd++ ){
//				for(yd = 0; yd < COL; yd++ ){
//                         g.plotPixel( y + yd, x + xd, pic[xd][yd].r, pic[xd][yd].g, pic[xd][yd].b);
//                }
//			}
//		if(g.kbhit()){
//			g.getKey();
//		}
//		if(g.getMouseClick(x,y)){
//			//do nothing
//		}
//		g.update();
//    }
//}
