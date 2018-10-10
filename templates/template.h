#pragma once
template <typename n> n min(n x, n y)
{
	if (x < y)
	{
		return x;
	}
	else if (y < x)
	{
		return y;
	}
}
template <typename n> n max(n x, n y)
{
	if (x > y)
	{
		return x;
	}
	else if (y > x)
	{
		return y;
	}
}
template <typename n> n clamp(n x, n y, n z)
{
	if (z > y)
	{
		return z = y;
	}
	else if (z < x)
	{
		return z = x;
	}
}
template <typename n> n minalph(n x, n y)
{
	if (x > 90)
	{
		x = x - 32;
	}
	else if (y > 90)
	{
		y = y - 32;
	}
	if (x < y)
	{
		return x;
	}
	else if (y < x)
	{
		return y;
	}
	
}
template <typename n> n maxalph(n x, n y)
{
	if (x > 90)
	{
		x = x - 32;
	}
	if (y > 90)
	{
		y = y - 32;
	}
	if (x > y)
	{
		return x;
	}
	else if (y > x)
	{
		return y;
	}

}

