#pragma once

/**
 * @brief Represents the canvas for drawing
 * 
 */
class Window {
    public:
        virtual ~Window() = default;

        virtual void Run(double rate) = 0;
        virtual int Width() const = 0;
        virtual int Height() const = 0;

    protected:
        virtual void OnResize() {};
        virtual void OnRenderFrame() {};
};