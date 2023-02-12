#include <OxylusEngine.h>
#include <core/EntryPoint.h>

namespace Oxylus {
    class MavreasEditor : public Application {
    public:
        MavreasEditor(const AppSpec& spec) : Application(spec) {
            PushLayer(new EditorLayer());
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
