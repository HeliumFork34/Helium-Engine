#include <Pentagram.hpp>

void eventCallback(PNT::Window *window, PNT::windowEvent event) {
}

int main(int argc, char *argv[]) {
    if(!PNT::init()) {
        return 1;
    }

    PNT::Window window("JPT Window", 60, 60, 0, 30, ImGuiConfigFlags_ViewportsEnable);
    window.setEventCallback(&eventCallback);
    window.setClearColor(0.25f, 0.25f, 0.25f, 0.25f);

    bool Running = 0;

    // Set icon.
    PNT::image icon("res\\textures\\logo\\JPT_Window_Icon.png");
    window.setIcon(icon);
    icon.loadOnGPU();

    float vertices[] = {
        -0.5f, -0.5f, 0.0f,
        0.5f, -0.5f, 0.0f,
        0.0f,  0.5f, 0.0f
    };

    window.hide();

    bool Button1 = 0, Button2 = 0;
    unsigned int Button1Size = 100, Button2Size = 100;
    while(!window.shouldClose()) {
        PNT::processEvents();

        window.startFrame();
        ImGui::Begin("Controls");
        ImGui::SetWindowSize(ImVec2(140, 180));
        if (!Running) {ImGui::SetWindowPos(ImVec2(00,100));}
        unsigned int ButtonNo = 0;
        if (Button1) { Button1Size = 105;}
        else { Button1Size = 100; }
        if (ImGui::Button("Hello", ImVec2(Button1Size, 30))) {window.minimize();}
        if (ImGui::IsItemHovered()) { ButtonNo = 1; Button1 = 1; }
        else { Button1 = 0; }
 
        if (Button2) { Button2Size = 105; }
        else { Button2Size = 100; }
        if (ImGui::Button("You Too", ImVec2(Button2Size, 30))) {window.maximize();}
        if (ImGui::IsItemHovered()) { ButtonNo = 2; Button2 = 1; }
        else { Button2 = 0; }

        if (ButtonNo == 0) {
        window.setClearColor(0.25f, 0.25f, 0.25f, 0.25f);
        }
        ImGui::Text("ButtonNo=%u", ButtonNo);
        ImGui::Text("Button1=%u", Button1);
        ImGui::Text("Button2=%u", Button2);

        ImGui::End();

        ImGui::Begin("Display");
        ImGui::SetWindowSize(ImVec2(600, 600));
        if (!Running) {ImGui::SetWindowPos(ImVec2(200,200));}

        icon.ImGuiDraw(ImVec2(200,200));

        ImGui::End();

        window.endFrame();
        Running = 1;
    }

    PNT::deinit();
    return 0;
}
