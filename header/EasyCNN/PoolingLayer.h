#pragma once
#include "EasyCNN/Configure.h"
#include "EasyCNN/Layer.h"

namespace EasyCNN
{
	class PoolingLayer : public Layer
	{
	public:
		PoolingLayer();
		virtual ~PoolingLayer();
	public:
		DECLARE_LAYER_TYPE;
		virtual std::string getLayerType() const;
		virtual void forward(std::shared_ptr<DataBucket> prevDataBucket, std::shared_ptr<DataBucket> nextDataBucket);
		virtual void backward(std::shared_ptr<DataBucket> prevDataBucket, std::shared_ptr<DataBucket> nextDataBucket);
	};
}