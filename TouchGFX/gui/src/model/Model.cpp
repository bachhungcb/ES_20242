#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "../../../../../ES_20242/STM32CubeIDE/Shared/PatternManager.hpp"
Model::Model() : modelListener(0)
{

}

void Model::tick()
{

}

void Model::init()
{
    PatternManager::getInstance().loadPattern();
}
