#include "typch.h"
#include "Layer.h"

namespace Tiny
{
	Layer::Layer(const std::string& debugName)
		: m_DebugName(debugName) {}

	Layer::~Layer() {}
}