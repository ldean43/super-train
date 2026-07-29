class IWindowObserver {
    public:
        virtual void OnResize() {};
        virtual void OnUpdate() {};
        virtual void OnPreRender() {};
        virtual void OnRender() {};
        virtual void OnPostRender() {};
    protected:
        ~IWindowObserver() = default;
};