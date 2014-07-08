//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKModelObject.h>

#import "VKMapLayer.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKDebugModel : VKModelObject <VKMapLayer>
{
    BOOL _geocentric;
    float _fontSize;
    struct unique_ptr<ggl::FragmentedPool<ggl::Debug::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::Shader::Setup>>> _debugShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::DebugPoints::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::DebugPoints::Shader::Setup>>> _debugPointsShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem>>> _debugRenderItemPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _debugLinesRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _debugPointsRenderState;
    shared_ptr_a5e35864 _unitRectMesh;
    BOOL _needsReset;
}

@property(nonatomic) BOOL geocentric; // @synthesize geocentric=_geocentric;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)appendDebugTileCommandsToBuffer:(struct CommandBuffer *)arg1 forMapTile:(id)arg2 fromLayer:(unsigned long long)arg3 withContext:(id)arg4 withConsole:(struct DebugConsole *)arg5;
- (void)resetPools:(id)arg1;
- (void)flushPools;
- (void)didReceiveMemoryWarning;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (shared_ptr_a5e35864)unitRectMesh;
- (void)dealloc;
- (id)init;
- (unsigned long long)mapLayerPosition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

