#ifndef _STATEMACHINEEVENTS_HPP_
#define	_STATEMACHINEEVENTS_HPP_

#include "m3uParser.hpp"
#include "IEvent.hpp"
#include "boost-filesystem-path-serialization.hpp"

#include <boost/statechart/event.hpp>
#include <boost/statechart/transition.hpp>
#include <boost/filesystem.hpp>
#include <boost/serialization/export.hpp>
#include <boost/serialization/serialization.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/optional.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>

#include <vector>

namespace mvpplayer
{
namespace logic
{

namespace fs = boost::filesystem;
namespace sc = boost::statechart;

/**
 * @brief event stop
 */
struct EvStop : IEvent, sc::event< EvStop >
{
private:
    typedef EvStop This;
public:
    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
    }

    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
};

/**
 * @brief event restart track
 */
struct EvRestartTrack : IEvent, sc::event< EvRestartTrack >
{
private:
    typedef EvRestartTrack This;
public:
    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
    }

    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
};

/**
 * @brief event previous track
 */
struct EvPreviousTrack : IEvent, sc::event< EvPreviousTrack >
{
private:
    typedef EvPreviousTrack This;
public:
    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
    }

    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
};

/**
 * @brief event next track
 */
struct EvNextTrack : IEvent, sc::event< EvNextTrack >
{
private:
    typedef EvNextTrack This;
public:
    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
    }

    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
};

/**
 * @brief event clear playlist
 */
struct EvClearPlaylist : IEvent, sc::event< EvClearPlaylist >
{
private:
    typedef EvClearPlaylist This;
public:
    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
    }

    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
};

/**
 * @brief event model cleared playlist
 */
struct EvModelClearedPlaylist : IEvent, sc::event< EvModelClearedPlaylist >
{
private:
    typedef EvModelClearedPlaylist This;
public:
    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
    }

    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
};

/**
 * @brief event start playlist
 */
struct EvStartPlaylist : IEvent, sc::event< EvStartPlaylist >
{
private:
    typedef EvStartPlaylist This;
public:
    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
    }

    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
};

/**
 * @brief event end of track
 */
struct EvEndOfTrack : IEvent, sc::event< EvEndOfTrack >
{
private:
    typedef EvEndOfTrack This;
public:
    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
    }

    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
};

/**
 * @brief event play
 */
struct EvPlay : IEvent, sc::event< EvPlay >
{
private:
    typedef EvPlay This;
public:
    EvPlay()
    {
    }

    EvPlay( const boost::optional<boost::filesystem::path> & filename )
    : _filename( filename )
    {
    }

    inline const boost::optional<boost::filesystem::path> & filename() const
    { return _filename; }

    inline bool hasFilename() const
    { return _filename != boost::none; }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
        ar & _filename;
    }

    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }
    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
private:
    boost::optional<boost::filesystem::path> _filename;      ///< Filename we want to play, empty for resume
};

/**
 * @brief event append playlist tracks
 */
struct EvAppendPlaylistTrack : IEvent, sc::event< EvAppendPlaylistTrack >
{
private:
    typedef EvAppendPlaylistTrack This;
public:
    EvAppendPlaylistTrack()
    {
    }

    EvAppendPlaylistTrack( const boost::filesystem::path & playlistFilename )
    : _playlistFilename( playlistFilename )
    {
    }

    inline const boost::filesystem::path & playlistFilename() const
    { return _playlistFilename; }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
        ar & _playlistFilename;
    }

    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }

    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
private:
    boost::filesystem::path _playlistFilename;      ///< Playlist filename (.m3u)
};

/**
 * @brief event append track items
 */
struct EvAppendTrackItems : IEvent, sc::event< EvAppendTrackItems >
{
private:
    typedef EvAppendTrackItems This;
    typedef std::vector<boost::filesystem::path> TrackItemsVecT;
public:
    EvAppendTrackItems()
    {
    }

    EvAppendTrackItems( const TrackItemsVecT & trackItems )
    : _trackItems( trackItems )
    {
    }

    inline const TrackItemsVecT & trackItems() const
    { return _trackItems; }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
        ar & _trackItems;
    }

    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }

    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
private:
    TrackItemsVecT _trackItems;      ///< Playlist track items (may be playlists or musics)
};

/**
 * @brief event played track
 */
struct EvPlayed : IEvent, sc::event< EvPlayed >
{
private:
    typedef EvPlayed This;
public:
    EvPlayed()
    {}

    EvPlayed( const boost::filesystem::path & filename )
    : _filename( filename )
    {}

    inline const boost::filesystem::path & filename() const
    { return _filename; }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
        ar & _filename;
    }

    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }
    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
private:
    boost::filesystem::path _filename;      ///< Filename we want to play
};

/**
 * @brief event add track
 */
struct EvAddTrack : IEvent, sc::event< EvAddTrack >
{
private:
    typedef EvAddTrack This;
public:
    EvAddTrack()
    {}

    EvAddTrack( const boost::filesystem::path & filename )
    : _filename( filename )
    {}

    inline const boost::filesystem::path & filename() const
    { return _filename; }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
        ar & _filename;
    }

    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }
    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
private:
    boost::filesystem::path _filename;      ///< Filename we want to play
};

/**
 * @brief event track added
 */
struct EvAddedTrack : IEvent, sc::event< EvAddedTrack >
{
private:
    typedef EvAddedTrack This;
public:
    EvAddedTrack()
    {}

    EvAddedTrack( const boost::filesystem::path & filename )
    : _filename( filename )
    {}

    inline const boost::filesystem::path & filename() const
    { return _filename; }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
        ar & _filename;
    }

    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }

    /**
     * @brief don't dispatch this event thru the network
     */
    bool shallDispatch() const
    { return false; }

    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
private:
    boost::filesystem::path _filename;      ///< Filename we want to play
};

/**
 * @brief event opened playlist
 */
struct EvOpenedPlaylist : IEvent, sc::event< EvOpenedPlaylist >
{
private:
    typedef EvOpenedPlaylist This;
public:
    EvOpenedPlaylist()
    {}

    EvOpenedPlaylist( const std::vector<m3uParser::PlaylistItem>& playlistItems )
    : _playlistItems( playlistItems )
    {}

    inline const std::vector<m3uParser::PlaylistItem>& playlistItems() const
    { return _playlistItems; }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
        ar & _playlistItems;
    }

    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }
    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
private:
    std::vector<m3uParser::PlaylistItem> _playlistItems; ///< Playlist items
};

/**
 * @brief event triggered when playing an item of the playlist
 */
struct EvPlayingItemIndex : IEvent, sc::event< EvPlayingItemIndex >
{
private:
    typedef EvPlayingItemIndex This;
public:
    EvPlayingItemIndex()
    : _playlistIndex( -1 )
    {}

    EvPlayingItemIndex( const boost::filesystem::path & filename, const int playlistIndex )
    : _filename( filename )
    , _playlistIndex( playlistIndex )
    {}

    inline const boost::filesystem::path & filename() const
    { return _filename; }

    inline const int playlistIndex() const
    { return _playlistIndex; }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
        ar & _filename;
        ar & _playlistIndex;
    }

    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }
    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
private:
    boost::filesystem::path _filename;      ///< Filename we want to play
    int _playlistIndex;                     ///< Playlist index
};

/**
 * @brief event triggered when settings volume
 */
struct EvSetVolume : IEvent, sc::event< EvSetVolume >
{
private:
    typedef EvSetVolume This;
public:
    EvSetVolume()
    : _volume( 1.0f )
    {}

    EvSetVolume( const float vol )
    : _volume( vol )
    {}

    inline const float volume() const
    { return _volume; }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
        ar & _volume;
    }

    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }
    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
private:
    float _volume;                     ///< Volume in [0;1]
};


/**
 * @brief event triggered when playing an item of the playlist
 */
struct EvPlayItemAtIndex : IEvent, sc::event< EvPlayItemAtIndex >
{
private:
    typedef EvPlayItemAtIndex This;
public:
    EvPlayItemAtIndex()
    : _playlistIndex( -1 )
    {}

    EvPlayItemAtIndex( const int index )
    : _playlistIndex( index )
    {}

    inline const int playlistIndex() const
    { return _playlistIndex; }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
        ar & _playlistIndex;
    }

    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }
    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
private:
    int _playlistIndex;                     ///< Playlist index
};

/**
 * @brief event triggered when asking to change the track position
 */
struct EvSetTrackPosition : IEvent, sc::event< EvSetTrackPosition >
{
private:
    typedef EvSetTrackPosition This;
public:
    EvSetTrackPosition()
    : _positionInPercent( -1 )
    {}

    EvSetTrackPosition( const int position )
    : _positionInPercent( position )
    {}

    inline const int position() const
    { return _positionInPercent; }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
        ar & _positionInPercent;
    }

    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }
    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
private:
    int _positionInPercent;                     ///< Position in percent (-1; 0-100)
};

/**
 * @brief event triggered when track position has changed
 */
struct EvTrackPositionChanged : IEvent, sc::event< EvTrackPositionChanged >
{
private:
    typedef EvTrackPositionChanged This;
public:
    EvTrackPositionChanged()
    : _positionInMS( 0 )
    , _trackLengthInMS( 0 )
    {}

    EvTrackPositionChanged( const std::size_t position, const std::size_t length )
    : _positionInMS( position )
    , _trackLengthInMS( length )
    {}

    inline const int position() const
    { return _positionInMS; }

    inline const int length() const
    { return _trackLengthInMS; }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
        ar & _positionInMS;
        ar & _trackLengthInMS;
    }

    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }

    /**
     * @brief don't dispatch this event thru the network
     */
    bool shallDispatch() const
    { return false; }

    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
private:
    int _positionInMS;      ///< Position in milliseconds
    int _trackLengthInMS;   ///< Length in milliseconds
};

/**
 * @brief event triggered when track length has changed
 */
struct EvTrackLengthChanged : IEvent, sc::event< EvTrackLengthChanged >
{
private:
    typedef EvTrackLengthChanged This;
public:
    EvTrackLengthChanged()
    : _lengthInMS( 0 )
    {}

    EvTrackLengthChanged( const std::size_t lengthInMS )
    : _lengthInMS( lengthInMS )
    {}

    inline const int length() const
    { return _lengthInMS; }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
        ar & _lengthInMS;
    }

    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }
    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
private:
    std::size_t _lengthInMS;                     ///< Length in milliseconds
};

/**
 * @brief event reset
 */
struct EvReset : IEvent, sc::event< EvReset >
{
private:
    typedef EvReset This;
public:
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
    }

    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }
    friend class boost::serialization::access;
    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
};

/**
 * @brief event stop
 */
struct EvCommandActive : IEvent, sc::event< EvCommandActive >
{
private:
    typedef EvCommandActive This;
public:
    
    EvCommandActive( const std::string & commandName = std::string(), const bool active = true )
    : _commandName( commandName )
    , _active( active )
    {
    }

    inline const std::string & commandName() const
    { return _commandName; }

    inline bool active() const
    { return _active; }

    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }

    friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
        ar & _commandName;
        ar & _active;
    }

    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
private:
    std::string _commandName;   ///< The command name
    bool _active;        ///< Active or not
};

/**
 * @brief event custom state
 */
struct EvCustomState : IEvent, sc::event< EvCustomState >
{
private:
    typedef EvCustomState This;
public:
    EvCustomState( const std::string & action = std::string() )
    : _action( action )
    {}

    /**
     * @brief get action
     */
    inline const std::string & action() const
    { return _action; }
    
    // This is needed to avoid a strange error on BOOST_CLASS_EXPORT_KEY
    static void operator delete( void *p, const std::size_t n )
    { ::operator delete(p); }

    friend class boost::serialization::access;
    template<class Archive>
    void serialize(Archive & ar, const unsigned int version)
    {
        ar & boost::serialization::base_object<IEvent>( *this );
        ar & _action;
    }
        
    /**
     * @brief process this event (needed to avoid dynamic_casts)
     * @param scheduler event scheduler
     * @param processor event processor
     */
    void processSelf( boost::statechart::fifo_scheduler<> & scheduler, boost::statechart::fifo_scheduler<>::processor_handle & processor )
    {
        scheduler.queue_event( processor, boost::intrusive_ptr< This >( this ) );
    }
private:
    std::string _action;    ///< Custom action
};

template<class Archive>
void registerClassInArchive( Archive & ar )
{
    ar.template register_type< EvStop >();
    ar.template register_type< EvRestartTrack >();
    ar.template register_type< EvPreviousTrack >();
    ar.template register_type< EvNextTrack >();
    ar.template register_type< EvClearPlaylist >();
    ar.template register_type< EvModelClearedPlaylist >();
    ar.template register_type< EvStartPlaylist >();
    ar.template register_type< EvEndOfTrack >();
    ar.template register_type< EvPlay >();
    ar.template register_type< EvPlayed >();
    ar.template register_type< EvAddTrack >();
    ar.template register_type< EvAddedTrack >();
    ar.template register_type< EvAppendPlaylistTrack >();
    ar.template register_type< EvAppendTrackItems >();
    ar.template register_type< EvOpenedPlaylist >();
    ar.template register_type< EvSetVolume >();
    ar.template register_type< EvPlayingItemIndex >();
    ar.template register_type< EvPlayItemAtIndex >();
    ar.template register_type< EvReset >();
    ar.template register_type< EvCustomState >();
    ar.template register_type< EvCommandActive >();
    ar.template register_type< EvTrackLengthChanged >();
    ar.template register_type< EvSetTrackPosition >();
    ar.template register_type< EvTrackPositionChanged >();
}

}
}

BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvStop );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvRestartTrack );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvPreviousTrack );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvNextTrack );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvClearPlaylist );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvModelClearedPlaylist );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvStartPlaylist );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvEndOfTrack );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvPlay );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvPlayed );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvAddTrack );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvAddedTrack );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvAppendPlaylistTrack );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvAppendTrackItems );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvOpenedPlaylist );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvSetVolume );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvPlayingItemIndex );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvPlayItemAtIndex );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvReset );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvCustomState );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvCommandActive );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvTrackLengthChanged );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvSetTrackPosition );
BOOST_CLASS_EXPORT_KEY( mvpplayer::logic::EvTrackPositionChanged );

#endif
