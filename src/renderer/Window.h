#pragma once

#include "./IWindowObserver.h"
#include <vector>

/**
 * @brief Represents the canvas for drawing
 * 
 */
class Window {
    public:
        Window();
        virtual ~Window() = default;

        Window(const Window&) = delete;
        Window& operator=(const Window&) = delete;

        virtual void Run(double rate) = 0;
        virtual int Width() const = 0;
        virtual int Height() const = 0;

        void AddObserver(IWindowObserver& observer);

    protected:
        virtual void OnResize();
        virtual void OnUpdate();
        virtual void OnPreRender();
        virtual void OnRender();
        virtual void OnPostRender();

    private:
        std::vector<IWindowObserver&> observers;
};