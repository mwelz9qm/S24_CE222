#pragma once

class lineType
{
public:
void setLine(double x, double y, double z);
double findSlope() const;
bool isEqual(const lineType &yourLine) const;
bool isParallel(const lineType &yourLine) const;
bool isPerp(const lineType &yourLine) const;
double findIntersect(const lineType &yourLine) const;
lineType(double x = 1, double y = 1, double z = 1);

private:
double a;
double b;
double c;
};


