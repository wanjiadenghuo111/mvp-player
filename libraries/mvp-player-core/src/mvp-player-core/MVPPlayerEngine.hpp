#ifndef _CORE_MVPPLAYERENGINE_HPP_
#define	_CORE_MVPPLAYERENGINE_HPP_

#include "ISoundPlayer.hpp"
#include "ISoundRecorder.hpp"
#include "m3uParser.hpp"

#include <boost/signals2.hpp>
#include <boost/foreach.hpp>
#include <boost/filesystem.hpp>
#include <boost/thread/mutex.hpp>
#include <boost/thread/locks.hpp>

#include <list>
#include <iterator>
#include <string>
#include <iostream>

namespace mvpplayer
{

class MVPPlayerEngine
{
public:
    MVPPlayerEngine( ISoundPlayer *soundPlayer, ISoundRecorder *soundRecorder );
    virtual ~MVPPlayerEngine();

    /**
     * @brief stop current track
     */
    virtual void stop();

    /**
     * @brief play a given file (if m3u, playlist will be changed)
     * @return false on success, true if error
     */
    virtual bool playFile( const boost::filesystem::path & filename );

    /**
     * @brief open a given playlist
     * @param playlistFilename given playlist
     */
    void openPlaylist( const boost::filesystem::path & playlistFilename );

    /**
     * @brief restart current track
     * @return false if success, true otherwise
     */
    virtual bool restart();

    /**
     * @brief play current track
     * @return false on success, true if error
     */
    virtual bool playCurrent();

    /**
     * @brief Play the current playlist
     */
    virtual void playList();

    /**
     * @brief Plays a playlist item
     * @param index playlist index
     */
    virtual void playPlaylistItem( const int index );

    /**
     * @brief Play the previous item of the playlist
     */
    virtual void playPrevious();

    /**
     * @brief Play the next item of the playlist
     */
    virtual void playNext();

    /**
     * @brief add a track to the playlist
     */
    inline void addTrack( const boost::filesystem::path & filename )
    {
        _playlist.push_back( filename );
        signalTrackAddedToPlaylist( filename );
    }

    /**
     * @brief clear the playlist
     */
    void clearPlaylist();

    /**
     * @brief get current played track
     * @return the current track
     * @todo threadsafe this
     */
    inline const boost::filesystem::path & currentPlayedTrack() const
    { return _currentPlayedTrack; }

    inline void notifyEndOfTrack() const
    { signalEndOfTrack(); }

// Signals
public:
    boost::signals2::signal<void(const std::vector<m3uParser::PlaylistItem>&)> signalOpenedPlaylist;///< Signals that we opened a playlist
    boost::signals2::signal<void(const boost::filesystem::path&)> signalTrackAddedToPlaylist;       ///< Signals that a track has been added to the playlist
    boost::signals2::signal<void(const boost::filesystem::path&)> signalPlayedTrack;                ///< Signals that a track has been played
    boost::signals2::signal<void()> signalEndOfTrack;                                               ///< Signals that the track has ended
    boost::signals2::signal<void()> signalClearedPlaylist;                                          ///< Signals that we cleared the playlist
    boost::signals2::signal<void(const boost::filesystem::path&, const int)> signalPlayingItemIndex;///< Signals that we are playing the 'index' track of the playlist

protected:
    ISoundPlayer *_soundPlayer;                                             ///< Pointer to a sound player instance
    ISoundRecorder *_soundRecorder;                                         ///< Pointer to a sound recorder instance
    boost::filesystem::path _currentPlayedTrack;                            ///< Current played track
    std::list<boost::filesystem::path>::const_iterator _currentPosition;    ///< Current playing position
    std::list<boost::filesystem::path> _playlist;                           ///< Track playlist
    mutable boost::mutex _mutex;                                            ///< Used for thread safetyness
};

}

#endif
