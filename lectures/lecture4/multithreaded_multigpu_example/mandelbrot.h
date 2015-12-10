const unsigned int WIDTH=16384;
const unsigned int HEIGHT=16384;
const unsigned int MAX_ITERS=100;
const unsigned int MAX_COLOR=255;
const double xmin=-1.7;
const double xmax=.5;
const double ymin=-1.2;
const double ymax=1.2;
const double dx=(xmax-xmin)/WIDTH;
const double dy=(ymax-ymin)/HEIGHT;
#pragma acc declare copyin(dx,dy)

#pragma acc routine seq
unsigned char mandelbrot(int Px, int Py);
