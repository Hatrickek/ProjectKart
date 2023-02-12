#pragma once
#include <Core/Layer.h>

namespace ProjectKart {

	class GameLayer : public Oxylus::Layer {
    public:
        ~GameLayer() override;
        void OnAttach() override;
        void OnDetach() override;
        void OnUpdate(float DeltaTime) override;
        void OnImGuiRender() override;
    };
}
