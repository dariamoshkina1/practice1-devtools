#include "filters.hpp"

class FiltersMoshkina : public Filters
{
public:
	virtual void boxFilter(const Matrix &src, Matrix& dst, const int kSize = 3)
	{ 
		/*double F = 1/kSize*kSize;
		int shift = kSize/2;

		for (int x=-shift; x<src.cols()+shift; x++)
			for (int y=-shift; x<src.rows()+shift; y++)
			{
				for (int i=0; i<kSize; i++)
					for (int j=0; j<kSize; j++)
					{
						if ((x+i<0)&&(y+j>0)) dst[x][y]+=F*src[-x-i][y];
					}
			}*/
	}
   virtual void filter2d(const Matrix &src, Matrix& dst, const Matrix &kernel)
   { }
   virtual void median(const Matrix &src, Matrix &dst, const int kSize = 3)
   {
	   /*uchar* tmp = new uchar[kSize*kSize];
	   for (int x=kSize/2; x<src.cols()-kSize/2; x++)
		   for (int y=kSize/2; y<src.rows()-kSize/2; y++)
		   {
			   for (int i=-kSize/2; i<kSize/2; i++)
			   {
				   for (int j=-kSize/2; j<kSize/2; j++)
					   tmp[(kSize/2+i)*kSize+(kSize/2+j)]=src[x+i][y+j];
			   }
			   for ()
		   }*/
   }
   virtual void SobelOx(const Matrix &src, Matrix &dst)
   { }
};

Filters* createFiltersMoshkina()
{
   Filters* filters = new FiltersMoshkina();
   return filters;
}