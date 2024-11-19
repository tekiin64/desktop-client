
#ifndef OWNCLOUDSYNC_EXPORT_H
#define OWNCLOUDSYNC_EXPORT_H

#ifdef OWNCLOUD_BUILT_AS_STATIC
#  define OWNCLOUDSYNC_EXPORT
#  define NEXTCLOUDSYNC_NO_EXPORT
#else
#  ifndef OWNCLOUDSYNC_EXPORT
#    ifdef nextcloudsync_EXPORTS
        /* We are building this library */
#      define OWNCLOUDSYNC_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define OWNCLOUDSYNC_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef NEXTCLOUDSYNC_NO_EXPORT
#    define NEXTCLOUDSYNC_NO_EXPORT 
#  endif
#endif

#ifndef NEXTCLOUDSYNC_DEPRECATED
#  define NEXTCLOUDSYNC_DEPRECATED __declspec(deprecated)
#endif

#ifndef NEXTCLOUDSYNC_DEPRECATED_EXPORT
#  define NEXTCLOUDSYNC_DEPRECATED_EXPORT OWNCLOUDSYNC_EXPORT NEXTCLOUDSYNC_DEPRECATED
#endif

#ifndef NEXTCLOUDSYNC_DEPRECATED_NO_EXPORT
#  define NEXTCLOUDSYNC_DEPRECATED_NO_EXPORT NEXTCLOUDSYNC_NO_EXPORT NEXTCLOUDSYNC_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef NEXTCLOUDSYNC_NO_DEPRECATED
#    define NEXTCLOUDSYNC_NO_DEPRECATED
#  endif
#endif

#endif /* OWNCLOUDSYNC_EXPORT_H */
