#pragma once

class CDataBox : public IComponent
{
	std::shared_ptr<IData> m_pData;
public:
	CDataBox();
	CDataBox(std::shared_ptr<IData>);
	HRESULT Move(std::shared_ptr<IData>&);
	HRESULT Set(std::shared_ptr<IData>);
};
