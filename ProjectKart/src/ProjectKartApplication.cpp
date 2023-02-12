#include <OxylusEngine.h>
#include <core/EntryPoint.h>

#include "GameLayer.h"

namespace Oxylus {
    class MavreasEditor : public Application {
    public:
        MavreasEditor(const AppSpec& spec) : Application(spec) {
            PushLayer(new ProjectKart::GameLayer());
        }
    };

    Application* CreateApplication(ApplicationCommandLineArgs args) {
        AppSpec spec;
        spec.Name = "ProjectKart";

        spec.Backend = Core::RenderBackend::Vulkan;
        spec.WorkingDirectory = std::filesystem::current_path().string();
        spec.CommandLineArgs = args;
        spec.CustomWindowTitle = true;
        spec.UseImGui = true;

        return new MavreasEditor(spec);
    }
}
