from building import *
Import('rtconfig')

src   = []
cwd   = GetCurrentDir()

# add mlx90382 src files.
if GetDepend('PKG_USING_MLX90382'):
    src += Glob('src/mlx90382.c')

if GetDepend('RT_USING_SENSOR'):
    src += Glob('src/sensor_melexis_mlx90382.c')

if GetDepend('PKG_USING_MLX90382_SAMPLE'):
    src += Glob('samples/mlx90382_sample.c')

# add mlx90382 include path.
path  = [cwd + '/inc']

# add src and include to group.
group = DefineGroup('mlx90382', src, depend = ['PKG_USING_MLX90382'], CPPPATH = path)

Return('group')
