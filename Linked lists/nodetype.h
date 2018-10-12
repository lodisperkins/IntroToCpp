#pragma once
template <typename i>
class nodetype
{
private:
	i info;
	nodetype*link;
public:
	nodetype();
	nodetype(i info);
};

template<typename i>
inline nodetype<i>::nodetype()
{
}
