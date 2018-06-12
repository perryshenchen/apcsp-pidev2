#include  <stdio.h>

int main()
{

	float areaOfCircle (float radius)
	{
        	printf("radius: %f\n", radius);
        	return (3.14*radius*radius);
	}


	float getArea;
	for (float i = 3.5; i <= 12.5; i = i + .5)
	{
		getArea = areaOfCircle(i);
		printf("area: %f\n", getArea);
	}

}
