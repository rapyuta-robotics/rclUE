#ifndef _H_EE8395FB8CE16470F56969B1DB3132A3_Char_DCPS_H_
#define _H_EE8395FB8CE16470F56969B1DB3132A3_Char_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Char_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Char_TypeSupportInterface;

            typedef Char_TypeSupportInterface * Char_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Char_TypeSupportInterface> Char_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Char_TypeSupportInterface> Char_TypeSupportInterface_out;


            class Char_DataWriter;

            typedef Char_DataWriter * Char_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Char_DataWriter> Char_DataWriter_var;
            typedef DDS_DCPSInterface_out < Char_DataWriter> Char_DataWriter_out;


            class Char_DataReader;

            typedef Char_DataReader * Char_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Char_DataReader> Char_DataReader_var;
            typedef DDS_DCPSInterface_out < Char_DataReader> Char_DataReader_out;


            class Char_DataReaderView;

            typedef Char_DataReaderView * Char_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Char_DataReaderView> Char_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Char_DataReaderView> Char_DataReaderView_out;

            struct Char_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Char_, struct Char_Seq_uniq_> Char_Seq;
            typedef DDS_DCPSSequence_var < Char_Seq> Char_Seq_var;
            typedef DDS_DCPSSequence_out < Char_Seq> Char_Seq_out;

            class  Char_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Char_TypeSupportInterface_ptr _ptr_type;
                typedef Char_TypeSupportInterface_var _var_type;

                static Char_TypeSupportInterface_ptr _duplicate (Char_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Char_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Char_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Char_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Char_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Char_TypeSupportInterface () {};
                ~Char_TypeSupportInterface () {};
            private:
                Char_TypeSupportInterface (const Char_TypeSupportInterface &);
                Char_TypeSupportInterface & operator = (const Char_TypeSupportInterface &);
            };

            class  Char_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Char_DataWriter_ptr _ptr_type;
                typedef Char_DataWriter_var _var_type;

                static Char_DataWriter_ptr _duplicate (Char_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Char_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Char_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Char_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Char_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Char_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Char_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Char_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Char_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Char_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Char_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Char_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Char_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Char_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Char_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Char_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Char_& instance_data) = 0;

            protected:
                Char_DataWriter () {};
                ~Char_DataWriter () {};
            private:
                Char_DataWriter (const Char_DataWriter &);
                Char_DataWriter & operator = (const Char_DataWriter &);
            };

            class  Char_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Char_DataReader_ptr _ptr_type;
                typedef Char_DataReader_var _var_type;

                static Char_DataReader_ptr _duplicate (Char_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Char_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Char_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Char_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Char_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Char_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Char_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Char_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Char_& instance) = 0;

            protected:
                Char_DataReader () {};
                ~Char_DataReader () {};
            private:
                Char_DataReader (const Char_DataReader &);
                Char_DataReader & operator = (const Char_DataReader &);
            };

            class  Char_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Char_DataReaderView_ptr _ptr_type;
                typedef Char_DataReaderView_var _var_type;

                static Char_DataReaderView_ptr _duplicate (Char_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Char_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Char_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Char_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Char_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Char_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Char_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Char_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Char_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Char_& instance) = 0;

            protected:
                Char_DataReaderView () {};
                ~Char_DataReaderView () {};
            private:
                Char_DataReaderView (const Char_DataReaderView &);
                Char_DataReaderView & operator = (const Char_DataReaderView &);
            };
        }

    }

}

#endif
